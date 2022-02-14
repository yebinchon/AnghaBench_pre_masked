
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad9834_state {int freq_msg; int spi; void** freq_data; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 void* FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ad9834_state *VAR_2,
      unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_2(VAR_2->mclk);

 if (VAR_4 > (VAR_5 / 2))
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_5, VAR_4);

 VAR_2->freq_data[0] = FUNC_3(VAR_3 | (VAR_6 &
           FUNC_0(VAR_0 / 2)));
 VAR_2->freq_data[1] = FUNC_3(VAR_3 | ((VAR_6 >>
           (VAR_0 / 2)) &
           FUNC_0(VAR_0 / 2)));

 return FUNC_4(VAR_2->spi, &VAR_2->freq_msg);
}
