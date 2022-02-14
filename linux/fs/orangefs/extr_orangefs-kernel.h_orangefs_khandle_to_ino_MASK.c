
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_khandle {int* u; } ;
typedef int ino_t ;
typedef int __u64 ;



__attribute__((used)) static inline ino_t FUNC_0(struct orangefs_khandle *VAR_0)
{
 union {
  unsigned char u[8];
  __u64 ino;
 } VAR_1;

 VAR_1.u[0] = VAR_0->u[0] ^ VAR_0->u[4];
 VAR_1.u[1] = VAR_0->u[1] ^ VAR_0->u[5];
 VAR_1.u[2] = VAR_0->u[2] ^ VAR_0->u[6];
 VAR_1.u[3] = VAR_0->u[3] ^ VAR_0->u[7];
 VAR_1.u[4] = VAR_0->u[12] ^ VAR_0->u[8];
 VAR_1.u[5] = VAR_0->u[13] ^ VAR_0->u[9];
 VAR_1.u[6] = VAR_0->u[14] ^ VAR_0->u[10];
 VAR_1.u[7] = VAR_0->u[15] ^ VAR_0->u[11];

 return VAR_1.ino;
}
