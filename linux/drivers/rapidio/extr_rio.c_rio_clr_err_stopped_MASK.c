
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct rio_dev {int swpinfo; TYPE_1__* rswitch; } ;
struct TYPE_2__ {struct rio_dev** nextdev; } ;


 int FUNC_0 (struct rio_dev*,size_t) ;
 int FUNC_1 (struct rio_dev*,size_t) ;
 size_t FUNC_2 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (struct rio_dev*,size_t,size_t*) ;
 int FUNC_5 (struct rio_dev*,int ,size_t*) ;
 int FUNC_6 (struct rio_dev*,int ,size_t) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct rio_dev *VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct rio_dev *VAR_10 = VAR_7->rswitch->nextdev[VAR_8];
 u32 VAR_11;
 u32 VAR_12, VAR_13, VAR_14;

 if (VAR_9 == 0)
  FUNC_5(VAR_7,
   FUNC_1(VAR_7, VAR_8),
   &VAR_9);

 if (VAR_9 & VAR_4) {
  FUNC_3("RIO_EM: servicing Output Error-Stopped state\n");



  if (FUNC_4(VAR_7, VAR_8, &VAR_11)) {
   FUNC_3("RIO_EM: Input-status response timeout\n");
   goto rd_err;
  }

  FUNC_3("RIO_EM: SP%d Input-status response=0x%08x\n",
    VAR_8, VAR_11);
  VAR_12 = (VAR_11 & VAR_5) >> 5;
  VAR_13 = VAR_11 & VAR_6;
  FUNC_5(VAR_7,
   FUNC_0(VAR_7, VAR_8),
   &VAR_11);
  FUNC_3("RIO_EM: SP%d_ACK_STS_CSR=0x%08x\n", VAR_8, VAR_11);
  VAR_14 = (VAR_11 & VAR_0) >> 24;
  FUNC_3("RIO_EM: SP%d far_ackID=0x%02x far_linkstat=0x%02x" " near_ackID=0x%02x\n",

   VAR_8, VAR_12, VAR_13, VAR_14);





  if ((VAR_12 != ((VAR_11 & VAR_2) >> 8)) ||
      (VAR_12 != (VAR_11 & VAR_1))) {



   FUNC_6(VAR_7,
    FUNC_0(VAR_7, VAR_8),
    (VAR_14 << 24) |
     (VAR_12 << 8) | VAR_12);



   VAR_12++;
   if (!VAR_10) {
    FUNC_3("RIO_EM: nextdev pointer == NULL\n");
    goto rd_err;
   }

   FUNC_6(VAR_10,
    FUNC_0(VAR_10,
     FUNC_2(VAR_10->swpinfo)),
    (VAR_12 << 24) |
    (VAR_14 << 8) | VAR_14);
  }
rd_err:
  FUNC_5(VAR_7, FUNC_1(VAR_7, VAR_8),
       &VAR_9);
  FUNC_3("RIO_EM: SP%d_ERR_STS_CSR=0x%08x\n", VAR_8, VAR_9);
 }

 if ((VAR_9 & VAR_3) && VAR_10) {
  FUNC_3("RIO_EM: servicing Input Error-Stopped state\n");
  FUNC_4(VAR_10,
         FUNC_2(VAR_10->swpinfo), ((void*)0));
  FUNC_7(50);

  FUNC_5(VAR_7, FUNC_1(VAR_7, VAR_8),
       &VAR_9);
  FUNC_3("RIO_EM: SP%d_ERR_STS_CSR=0x%08x\n", VAR_8, VAR_9);
 }

 return (VAR_9 & (VAR_4 |
         VAR_3)) ? 1 : 0;
}
