
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message_header {int present; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(void *VAR_1)
{
 struct message_header *VAR_2 = VAR_1 + VAR_0;
 return VAR_2->present;
}
