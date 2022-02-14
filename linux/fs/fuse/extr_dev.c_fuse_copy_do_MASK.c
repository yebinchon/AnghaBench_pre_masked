
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_copy_state {unsigned int len; int offset; scalar_t__ write; int pg; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct fuse_copy_state *VAR_0, void **VAR_1, unsigned *VAR_2)
{
 unsigned VAR_3 = FUNC_3(*VAR_2, VAR_0->len);
 if (VAR_1) {
  void *VAR_4 = FUNC_0(VAR_0->pg);
  void *VAR_5 = VAR_4 + VAR_0->offset;

  if (VAR_0->write)
   FUNC_2(VAR_5, *VAR_1, VAR_3);
  else
   FUNC_2(*VAR_1, VAR_5, VAR_3);

  FUNC_1(VAR_4);
  *VAR_1 += VAR_3;
 }
 *VAR_2 -= VAR_3;
 VAR_0->len -= VAR_3;
 VAR_0->offset += VAR_3;
 return VAR_3;
}
