
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {int dummy; } ;
struct buffer_head {int b_end_io; } ;
typedef int const __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int VAR_5 ;
 struct buffer_head* FUNC_3 (struct gfs2_glock*,int ,int ) ;
 int FUNC_4 (int ,int,struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_7(struct gfs2_glock *VAR_6, __be64 *VAR_7, __be64 *VAR_8)
{
 const __be64 *VAR_9;

 for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++) {
  struct buffer_head *VAR_10;

  if (!*VAR_9)
   continue;

  VAR_10 = FUNC_3(VAR_6, FUNC_0(*VAR_9), VAR_0);
  if (FUNC_5(VAR_10)) {
   if (!FUNC_2(VAR_10)) {
    VAR_10->b_end_io = VAR_5;
    FUNC_4(VAR_2,
       VAR_4 | VAR_1 | VAR_3,
       VAR_10);
    continue;
   }
   FUNC_6(VAR_10);
  }
  FUNC_1(VAR_10);
 }
}
