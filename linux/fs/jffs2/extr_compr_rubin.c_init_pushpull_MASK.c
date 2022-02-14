
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pushpull {char* buf; unsigned int buflen; unsigned int ofs; unsigned int reserve; } ;



__attribute__((used)) static inline void FUNC_0(struct pushpull *VAR_0, char *VAR_1,
     unsigned VAR_2, unsigned VAR_3,
     unsigned VAR_4)
{
 VAR_0->buf = VAR_1;
 VAR_0->buflen = VAR_2;
 VAR_0->ofs = VAR_3;
 VAR_0->reserve = VAR_4;
}
