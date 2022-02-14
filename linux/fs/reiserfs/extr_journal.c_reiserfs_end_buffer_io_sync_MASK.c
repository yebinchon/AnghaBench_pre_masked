
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_bdev; int b_blocknr; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *,char*,char*,int ,int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_6(struct buffer_head *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_0)) {
  FUNC_2(((void*)0), "clm-2084",
     "pinned buffer %lu:%pg sent to disk",
     VAR_0->b_blocknr, VAR_0->b_bdev);
 }
 if (VAR_1)
  FUNC_4(VAR_0);
 else
  FUNC_1(VAR_0);

 FUNC_5(VAR_0);
 FUNC_3(VAR_0);
}
