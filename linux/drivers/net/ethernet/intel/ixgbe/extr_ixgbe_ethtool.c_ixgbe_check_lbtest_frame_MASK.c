
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_rx_buffer {int page_offset; int page; } ;


 unsigned char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct ixgbe_rx_buffer *VAR_0,
         unsigned int VAR_1)
{
 unsigned char *VAR_2;
 bool VAR_3 = 1;

 VAR_1 >>= 1;

 VAR_2 = FUNC_0(VAR_0->page) + VAR_0->page_offset;

 if (VAR_2[3] != 0xFF ||
     VAR_2[VAR_1 + 10] != 0xBE ||
     VAR_2[VAR_1 + 12] != 0xAF)
  VAR_3 = 0;

 FUNC_1(VAR_0->page);

 return VAR_3;
}
