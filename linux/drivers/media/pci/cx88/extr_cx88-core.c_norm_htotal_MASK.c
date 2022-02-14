
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int FUNC_1(v4l2_std_id VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1) / 2;


 return (VAR_1 & VAR_0) ?
    ((VAR_2 + 312) / 625 + 12) / 25 :
    ((VAR_2 + 262) / 525 * 1001 + 15000) / 30000;
}
