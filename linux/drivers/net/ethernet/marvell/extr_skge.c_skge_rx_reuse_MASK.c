
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_rx_desc {unsigned int control; int csum2_start; scalar_t__ csum2; } ;
struct skge_element {struct skge_rx_desc* desc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct skge_element *VAR_5, unsigned int VAR_6)
{
 struct skge_rx_desc *VAR_7 = VAR_5->desc;

 VAR_7->csum2 = 0;
 VAR_7->csum2_start = VAR_4;

 FUNC_0();

 VAR_7->control = VAR_1 | VAR_2 | VAR_0 | VAR_3 | VAR_6;
}
