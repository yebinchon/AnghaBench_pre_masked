
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_decompress_req {int pageofs_out; scalar_t__* out; scalar_t__* in; scalar_t__ outputsize; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned char*,unsigned int const) ;
 int FUNC_5 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_6(const struct z_erofs_decompress_req *VAR_3,
         struct list_head *VAR_4)
{
 const unsigned int VAR_5 =
  FUNC_1(VAR_3->pageofs_out + VAR_3->outputsize) >> VAR_1;
 const unsigned int VAR_6 = VAR_2 - VAR_3->pageofs_out;
 unsigned char *VAR_7, *VAR_8;

 if (VAR_5 > 2) {
  FUNC_0(1);
  return -VAR_0;
 }

 if (VAR_3->out[0] == *VAR_3->in) {
  FUNC_0(VAR_5 != 1);
  return 0;
 }

 VAR_7 = FUNC_2(*VAR_3->in);
 if (!VAR_3->out[0]) {
  VAR_8 = ((void*)0);
 } else {
  VAR_8 = FUNC_2(VAR_3->out[0]);
  FUNC_4(VAR_8 + VAR_3->pageofs_out, VAR_7, VAR_6);
 }

 if (VAR_3->out[1] == *VAR_3->in) {
  FUNC_5(VAR_7, VAR_7 + VAR_6, VAR_3->pageofs_out);
 } else if (VAR_5 == 2) {
  if (VAR_8)
   FUNC_3(VAR_8);
  FUNC_0(!VAR_3->out[1]);
  VAR_8 = FUNC_2(VAR_3->out[1]);
  FUNC_4(VAR_8, VAR_7 + VAR_6, VAR_3->pageofs_out);
 }
 if (VAR_8)
  FUNC_3(VAR_8);
 FUNC_3(VAR_7);
 return 0;
}
