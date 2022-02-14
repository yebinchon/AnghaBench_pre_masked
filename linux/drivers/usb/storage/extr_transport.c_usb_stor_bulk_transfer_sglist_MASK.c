
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; unsigned int bytes; } ;
struct us_data {TYPE_1__ current_sg; int dflags; int pusb_dev; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct us_data*,unsigned int,unsigned int,int,unsigned int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,unsigned int,int ,struct scatterlist*,int,unsigned int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct us_data*,char*,...) ;

__attribute__((used)) static int FUNC_9(struct us_data *VAR_4, unsigned int VAR_5,
  struct scatterlist *VAR_6, int VAR_7, unsigned int VAR_8,
  unsigned int *VAR_9)
{
 int VAR_10;


 if (FUNC_4(VAR_2, &VAR_4->dflags))
  return VAR_1;


 FUNC_8(VAR_4, "xfer %u bytes, %d entries\n", VAR_8, VAR_7);
 VAR_10 = FUNC_6(&VAR_4->current_sg, VAR_4->pusb_dev, VAR_5, 0,
   VAR_6, VAR_7, VAR_8, VAR_0);
 if (VAR_10) {
  FUNC_8(VAR_4, "usb_sg_init returned %d\n", VAR_10);
  return VAR_1;
 }





 FUNC_2(VAR_3, &VAR_4->dflags);


 if (FUNC_4(VAR_2, &VAR_4->dflags)) {


  if (FUNC_3(VAR_3, &VAR_4->dflags)) {
   FUNC_8(VAR_4, "-- cancelling sg request\n");
   FUNC_5(&VAR_4->current_sg);
  }
 }


 FUNC_7(&VAR_4->current_sg);
 FUNC_0(VAR_3, &VAR_4->dflags);

 VAR_10 = VAR_4->current_sg.status;
 if (VAR_9)
  *VAR_9 = VAR_4->current_sg.bytes;
 return FUNC_1(VAR_4, VAR_5, VAR_8, VAR_10,
   VAR_4->current_sg.bytes);
}
