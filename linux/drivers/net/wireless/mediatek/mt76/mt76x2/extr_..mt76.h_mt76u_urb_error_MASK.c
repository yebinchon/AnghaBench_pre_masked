
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct urb *VAR_3)
{
 return VAR_3->status &&
        VAR_3->status != -VAR_0 &&
        VAR_3->status != -VAR_2 &&
        VAR_3->status != -VAR_1;
}
