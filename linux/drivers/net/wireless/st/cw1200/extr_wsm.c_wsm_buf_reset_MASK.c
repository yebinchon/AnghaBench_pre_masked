
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct wsm_buf {int * begin; int * data; } ;



__attribute__((used)) static void FUNC_0(struct wsm_buf *VAR_0)
{
 if (VAR_0->begin) {
  VAR_0->data = &VAR_0->begin[4];
  *(u32 *)VAR_0->begin = 0;
 } else {
  VAR_0->data = VAR_0->begin;
 }
}
