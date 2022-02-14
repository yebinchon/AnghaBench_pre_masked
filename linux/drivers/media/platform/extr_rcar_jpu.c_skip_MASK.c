
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jpeg_buffer {scalar_t__ curr; scalar_t__ end; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct jpeg_buffer *VAR_0, unsigned long VAR_1)
{
 VAR_0->curr += FUNC_0((unsigned long)(VAR_0->end - VAR_0->curr), VAR_1);
}
