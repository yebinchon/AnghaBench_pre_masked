
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcw {int r; int w; int flags; int format; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tcw*,int ,int) ;

void FUNC_2(struct tcw *VAR_2, int VAR_3, int VAR_4)
{
 FUNC_1(VAR_2, 0, sizeof(struct tcw));
 VAR_2->format = VAR_0;
 VAR_2->flags = FUNC_0(VAR_1);
 if (VAR_3)
  VAR_2->r = 1;
 if (VAR_4)
  VAR_2->w = 1;
}
