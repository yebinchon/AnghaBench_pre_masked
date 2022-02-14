
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
struct ntb_dev {TYPE_3__* msi; TYPE_1__* pdev; } ;
struct TYPE_5__ {int address_lo; scalar_t__ address_hi; } ;
struct msi_desc {TYPE_2__ msg; } ;
typedef int resource_size_t ;
struct TYPE_6__ {int base_addr; int end_addr; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msi_desc* FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct ntb_dev*,int,int) ;
 int FUNC_3 (struct ntb_dev*,int,int,int*,int*,int*) ;
 int FUNC_4 (struct ntb_dev*,int,int,int,int) ;
 int FUNC_5 (struct ntb_dev*,int) ;
 int FUNC_6 (struct ntb_dev*) ;
 int FUNC_7 (int,int) ;

int FUNC_8(struct ntb_dev *VAR_2)
{
 struct msi_desc *VAR_3;
 u64 VAR_4;
 int VAR_5, VAR_6;
 resource_size_t VAR_7, VAR_8, VAR_9;
 resource_size_t VAR_10 = VAR_1;
 resource_size_t VAR_11 = VAR_10;
 int VAR_12;
 int VAR_13;

 if (!VAR_2->msi)
  return -VAR_0;

 VAR_3 = FUNC_0(&VAR_2->pdev->dev);
 VAR_4 = VAR_3->msg.address_lo + ((uint64_t)VAR_3->msg.address_hi << 32);

 for (VAR_5 = 0; VAR_5 < FUNC_6(VAR_2); VAR_5++) {
  VAR_6 = FUNC_5(VAR_2, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_13 = FUNC_3(VAR_2, VAR_5, VAR_6, &VAR_7,
           ((void*)0), ((void*)0));
  if (VAR_13)
   return VAR_13;

  VAR_4 &= ~(VAR_7 - 1);
 }

 for (VAR_5 = 0; VAR_5 < FUNC_6(VAR_2); VAR_5++) {
  VAR_6 = FUNC_5(VAR_2, VAR_5);
  if (VAR_6 < 0) {
   VAR_13 = VAR_6;
   goto error_out;
  }

  VAR_13 = FUNC_3(VAR_2, VAR_5, VAR_6, ((void*)0),
           &VAR_8, &VAR_9);
  if (VAR_13)
   goto error_out;

  VAR_10 = FUNC_7(VAR_10, VAR_8);
  VAR_10 = FUNC_1(VAR_10, VAR_9);
  if (VAR_10 < VAR_11)
   VAR_11 = VAR_10;

  VAR_13 = FUNC_4(VAR_2, VAR_5, VAR_6,
           VAR_4, VAR_10);
  if (VAR_13)
   goto error_out;
 }

 VAR_2->msi->base_addr = VAR_4;
 VAR_2->msi->end_addr = VAR_4 + VAR_11;

 return 0;

error_out:
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_6 = FUNC_5(VAR_2, VAR_5);
  if (VAR_6 < 0)
   continue;

  FUNC_2(VAR_2, VAR_12, VAR_6);
 }

 return VAR_13;
}
