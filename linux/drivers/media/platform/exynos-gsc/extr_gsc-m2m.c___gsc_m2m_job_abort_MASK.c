
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_ctx {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct gsc_ctx*) ;
 int FUNC_1 (struct gsc_ctx*) ;
 int FUNC_2 (struct gsc_ctx*,int ) ;

__attribute__((used)) static void FUNC_3(struct gsc_ctx *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 if ((VAR_5 == -VAR_0) || (VAR_4->state & VAR_1)) {
  FUNC_0(VAR_2 | VAR_1, VAR_4);
  FUNC_2(VAR_4, VAR_3);
 }
}
