
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aac_dev {int max_msix; TYPE_2__* init; int sync_mode; scalar_t__ msi_enabled; } ;
struct TYPE_6__ {int OMR; } ;
struct TYPE_4__ {int no_of_msix_vectors; } ;
struct TYPE_5__ {TYPE_1__ r7; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct aac_dev*) ;
 int FUNC_2 (struct aac_dev*) ;
 int FUNC_3 (struct aac_dev*) ;
 int FUNC_4 (struct aac_dev*) ;
 int FUNC_5 (struct aac_dev*) ;
 scalar_t__ FUNC_6 (struct aac_dev*) ;
 int FUNC_7 (struct aac_dev*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 unsigned long FUNC_10 (struct aac_dev*,int ) ;

__attribute__((used)) static int FUNC_11(struct aac_dev *VAR_3)
{
 unsigned long VAR_4;




 while (!((VAR_4 = FUNC_10(VAR_3, VAR_2.OMR)) & VAR_1)
  || VAR_4 == 0xffffffff)
   FUNC_9(20);

 FUNC_1(VAR_3);
 FUNC_2(VAR_3);


 if (FUNC_6(VAR_3))
  FUNC_4(VAR_3);

 if (VAR_3->msi_enabled)
  FUNC_7(VAR_3, VAR_0);

 if (FUNC_0(VAR_3))
  goto error_iounmap;

 FUNC_2(VAR_3);




 FUNC_5(VAR_3);

 if (!VAR_3->sync_mode) {



  VAR_3->init->r7.no_of_msix_vectors = FUNC_8(VAR_3->max_msix);
  FUNC_3(VAR_3);
 }
 return 0;

error_iounmap:
 return -1;

}
