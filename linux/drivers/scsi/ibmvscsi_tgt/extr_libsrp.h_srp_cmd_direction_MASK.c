
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_cmd {int buf_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct srp_cmd *VAR_2)
{
 return (VAR_2->buf_fmt >> 4) ? VAR_1 : VAR_0;
}
