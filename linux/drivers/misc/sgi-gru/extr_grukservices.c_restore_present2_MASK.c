
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message_header {int present; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(void *VAR_1, int VAR_2)
{
 struct message_header *VAR_3 = VAR_1 + VAR_0;
 VAR_3->present = VAR_2;
}
