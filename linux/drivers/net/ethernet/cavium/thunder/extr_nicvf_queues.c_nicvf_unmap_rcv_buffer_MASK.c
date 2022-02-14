
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct nicvf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ,int,int ,int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 struct page* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nicvf *VAR_5, u64 VAR_6,
       u64 VAR_7, bool VAR_8)
{
 struct page *VAR_9 = ((void*)0);
 int VAR_10 = VAR_3;

 if (VAR_8) {
  VAR_9 = FUNC_3(FUNC_2(VAR_7));





  if (FUNC_1(VAR_9) != 1)
   return;

  VAR_10 += VAR_4;

  VAR_6 &= VAR_2;
 }
 FUNC_0(&VAR_5->pdev->dev, VAR_6, VAR_10,
        VAR_1, VAR_0);
}
