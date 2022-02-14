
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_tty_data {size_t read_head; size_t read_tail; } ;



__attribute__((used)) static inline size_t FUNC_0(struct n_tty_data *VAR_0)
{
 return VAR_0->read_head - VAR_0->read_tail;
}
