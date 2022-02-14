
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfu_status {int* poll_timeout; } ;


 unsigned long FUNC_0 (int) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct dfu_status *VAR_0)
{
 return FUNC_0((VAR_0->poll_timeout[2] << 16)
    | (VAR_0->poll_timeout[1] << 8)
    | (VAR_0->poll_timeout[0]));
}
