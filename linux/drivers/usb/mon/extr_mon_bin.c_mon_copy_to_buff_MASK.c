
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mon_reader_bin {unsigned int b_size; TYPE_1__* b_vec; } ;
struct TYPE_2__ {unsigned char* ptr; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(const struct mon_reader_bin *VAR_1,
    unsigned int VAR_2, const unsigned char *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 unsigned char *VAR_6;
 unsigned int VAR_7;

 while (VAR_4) {



  VAR_5 = VAR_4;
  VAR_7 = VAR_0 - (VAR_2 & (VAR_0-1));
  if (VAR_7 < VAR_5)
   VAR_5 = VAR_7;




  VAR_6 = VAR_1->b_vec[VAR_2 / VAR_0].ptr + VAR_2 % VAR_0;
  FUNC_0(VAR_6, VAR_3, VAR_5);
  if ((VAR_2 += VAR_5) >= VAR_1->b_size) VAR_2 = 0;
  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
 }
 return VAR_2;
}
