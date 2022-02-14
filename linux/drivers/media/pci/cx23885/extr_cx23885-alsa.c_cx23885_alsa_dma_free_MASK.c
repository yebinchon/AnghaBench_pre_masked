
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx23885_audio_buffer {int * vaddr; int * sglist; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct cx23885_audio_buffer *VAR_0)
{
 FUNC_0(VAR_0->sglist);
 VAR_0->sglist = ((void*)0);
 FUNC_0(VAR_0->vaddr);
 VAR_0->vaddr = ((void*)0);
 return 0;
}
