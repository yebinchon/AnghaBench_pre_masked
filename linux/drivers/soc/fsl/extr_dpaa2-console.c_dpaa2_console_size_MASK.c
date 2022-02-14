
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console_data {scalar_t__ cur_ptr; scalar_t__ end_of_data; scalar_t__ end_addr; scalar_t__ start_addr; } ;
typedef scalar_t__ ssize_t ;



__attribute__((used)) static ssize_t FUNC_0(struct console_data *VAR_0)
{
 ssize_t VAR_1;

 if (VAR_0->cur_ptr <= VAR_0->end_of_data)
  VAR_1 = VAR_0->end_of_data - VAR_0->cur_ptr;
 else
  VAR_1 = (VAR_0->end_addr - VAR_0->cur_ptr) +
   (VAR_0->end_of_data - VAR_0->start_addr);

 return VAR_1;
}
