
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_camera {int dummy; } ;


 int FUNC_0 (struct via_camera*,int) ;
 int FUNC_1 (struct via_camera*,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct via_camera *VAR_0,
  int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, VAR_1);

 VAR_4 = (VAR_4 & ~VAR_3) | (VAR_2 & VAR_3);
 FUNC_1(VAR_0, VAR_1, VAR_4);
}
