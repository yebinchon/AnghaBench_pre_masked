
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_tty_data {unsigned char* echo_buf; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned char *FUNC_0(struct n_tty_data *VAR_1, size_t VAR_2)
{
 return &VAR_1->echo_buf[VAR_2 & (VAR_0 - 1)];
}
