
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_mapping_iter {int length; int addr; } ;
struct r592_device {TYPE_1__* req; int pio_fifo; } ;
struct TYPE_2__ {scalar_t__ tpc; int sg; int data_len; int data; int long_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct r592_device*) ;
 int FUNC_4 (struct r592_device*,int ,int ) ;
 int FUNC_5 (struct r592_device*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sg_mapping_iter*) ;
 int FUNC_7 (struct sg_mapping_iter*,int *,int,int) ;
 int FUNC_8 (struct sg_mapping_iter*) ;

__attribute__((used)) static int FUNC_9(struct r592_device *VAR_4)
{
 unsigned long VAR_5;

 bool VAR_6 = VAR_4->req->tpc >= VAR_0;
 struct sg_mapping_iter VAR_7;

 FUNC_0(&VAR_4->pio_fifo);

 if (!VAR_4->req->long_data) {
  if (VAR_6) {
   FUNC_5(VAR_4, VAR_4->req->data,
       VAR_4->req->data_len);
   FUNC_3(VAR_4);
  } else
   FUNC_4(VAR_4, VAR_4->req->data,
       VAR_4->req->data_len);
  return 0;
 }

 FUNC_2(VAR_5);
 FUNC_7(&VAR_7, &VAR_4->req->sg, 1, VAR_1 |
  (VAR_6 ? VAR_2 : VAR_3));


 while (FUNC_6(&VAR_7))
  if (VAR_6)
   FUNC_5(VAR_4, VAR_7.addr, VAR_7.length);
  else
   FUNC_4(VAR_4, VAR_7.addr, VAR_7.length);



 if (VAR_6)
  FUNC_3(VAR_4);

 FUNC_8(&VAR_7);
 FUNC_1(VAR_5);
 return 0;
}
