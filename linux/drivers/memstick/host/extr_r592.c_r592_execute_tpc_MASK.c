
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct r592_device {TYPE_2__* req; scalar_t__ parallel_mode; } ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {int tpc; int data_len; int error; int int_reg; scalar_t__ need_card_int; TYPE_1__ sg; scalar_t__ long_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct r592_device*,int ,int ) ;
 int FUNC_4 (struct r592_device*,int ) ;
 int FUNC_5 (struct r592_device*,int ,int ) ;
 int FUNC_6 (struct r592_device*) ;
 int FUNC_7 (struct r592_device*) ;
 int FUNC_8 (struct r592_device*) ;
 int FUNC_9 (struct r592_device*) ;
 int FUNC_10 (struct r592_device*,int,int) ;
 int FUNC_11 (struct r592_device*,int ,int) ;

__attribute__((used)) static void FUNC_12(struct r592_device *VAR_25)
{
 bool VAR_26;
 int VAR_27, VAR_28;
 u32 VAR_29, VAR_30;

 if (!VAR_25->req) {
  FUNC_2("BUG: tpc execution without request!");
  return;
 }

 VAR_26 = VAR_25->req->tpc >= VAR_7;
 VAR_27 = VAR_25->req->long_data ?
  VAR_25->req->sg.length : VAR_25->req->data_len;


 if (VAR_27 > VAR_10) {
  FUNC_2("IO: hardware doesn't support TPCs longer that 512");
  VAR_28 = -VAR_2;
  goto out;
 }

 if (!(FUNC_4(VAR_25, VAR_11) & VAR_13)) {
  FUNC_0("IO: refusing to send TPC because card is absent");
  VAR_28 = -VAR_1;
  goto out;
 }

 FUNC_0("IO: executing %s LEN=%d",
   FUNC_1(VAR_25->req->tpc), VAR_27);


 if (VAR_26)
  FUNC_5(VAR_25, VAR_8, VAR_9);
 else
  FUNC_3(VAR_25, VAR_8, VAR_9);


 VAR_28 = FUNC_6(VAR_25);
 if (VAR_28)
  goto out;


 if (VAR_26) {
  VAR_28 = FUNC_8(VAR_25);
  if (VAR_28 == -VAR_0)
   VAR_28 = FUNC_9(VAR_25);
 }

 if (VAR_28)
  goto out;


 VAR_30 = (VAR_27 << VAR_23) |
  (VAR_25->req->tpc << VAR_24) |
   VAR_22;

 FUNC_11(VAR_25, VAR_21, VAR_30);


 VAR_29 = VAR_20;
 if (VAR_25->req->need_card_int)
  VAR_29 |= VAR_15;

 VAR_28 = FUNC_10(VAR_25, VAR_29, VAR_29);
 if (VAR_28) {
  FUNC_2("card didn't respond");
  goto out;
 }


 VAR_28 = FUNC_7(VAR_25);
 if (VAR_28) {
  FUNC_0("IO error");
  goto out;
 }


 if (!VAR_26) {
  VAR_28 = FUNC_8(VAR_25);
  if (VAR_28 == -VAR_0)
   VAR_28 = FUNC_9(VAR_25);
 }



 if (VAR_25->parallel_mode && VAR_25->req->need_card_int) {

  VAR_25->req->int_reg = 0;
  VAR_29 = FUNC_4(VAR_25, VAR_14);

  if (VAR_29 & VAR_18)
   VAR_25->req->int_reg |= VAR_5;
  if (VAR_29 & VAR_16)
   VAR_25->req->int_reg |= VAR_3;
  if (VAR_29 & VAR_19)
   VAR_25->req->int_reg |= VAR_6;
  if (VAR_29 & VAR_17)
   VAR_25->req->int_reg |= VAR_4;
 }

 if (VAR_28)
  FUNC_0("FIFO read error");
out:
 VAR_25->req->error = VAR_28;
 FUNC_3(VAR_25, VAR_11, VAR_12);
 return;
}
