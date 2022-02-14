
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad9832_state {int freq_msg; int spi; void** freq_data; int mclk; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct ad9832_state *VAR_5,
      unsigned int VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8;

 if (VAR_7 > (FUNC_1(VAR_5->mclk) / 2))
  return -VAR_4;

 VAR_8 = FUNC_0(FUNC_1(VAR_5->mclk), VAR_7);

 VAR_5->freq_data[0] = FUNC_2((VAR_1 << VAR_3) |
     (VAR_6 << VAR_2) |
     ((VAR_8 >> 24) & 0xFF));
 VAR_5->freq_data[1] = FUNC_2((VAR_0 << VAR_3) |
     ((VAR_6 - 1) << VAR_2) |
     ((VAR_8 >> 16) & 0xFF));
 VAR_5->freq_data[2] = FUNC_2((VAR_1 << VAR_3) |
     ((VAR_6 - 2) << VAR_2) |
     ((VAR_8 >> 8) & 0xFF));
 VAR_5->freq_data[3] = FUNC_2((VAR_0 << VAR_3) |
     ((VAR_6 - 3) << VAR_2) |
     ((VAR_8 >> 0) & 0xFF));

 return FUNC_3(VAR_5->spi, &VAR_5->freq_msg);
}
