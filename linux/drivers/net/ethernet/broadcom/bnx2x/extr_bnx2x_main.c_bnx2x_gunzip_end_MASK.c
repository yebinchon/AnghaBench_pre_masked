
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x {int * gunzip_buf; int gunzip_mapping; TYPE_1__* pdev; TYPE_2__* strm; } ;
struct TYPE_4__ {int workspace; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1)
{
 if (VAR_1->strm) {
  FUNC_2(VAR_1->strm->workspace);
  FUNC_1(VAR_1->strm);
  VAR_1->strm = ((void*)0);
 }

 if (VAR_1->gunzip_buf) {
  FUNC_0(&VAR_1->pdev->dev, VAR_0, VAR_1->gunzip_buf,
      VAR_1->gunzip_mapping);
  VAR_1->gunzip_buf = ((void*)0);
 }
}
