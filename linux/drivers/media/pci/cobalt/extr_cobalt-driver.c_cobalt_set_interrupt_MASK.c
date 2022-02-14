
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cobalt {scalar_t__ have_hsma_tx; scalar_t__ have_hsma_rx; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct cobalt*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct cobalt *VAR_21, bool VAR_22)
{
 if (VAR_22) {
  unsigned VAR_23 = VAR_2 |
    VAR_5 |
    VAR_8 |
    VAR_11 |
    VAR_3 |
    VAR_6 |
    VAR_9 |
    VAR_12 |
    VAR_4 |
    VAR_7 |
    VAR_10 |
    VAR_13 |
    VAR_0;

  if (VAR_21->have_hsma_rx)
   VAR_23 |= VAR_14 |
    VAR_15 |
    VAR_16;

  if (VAR_21->have_hsma_tx)
   VAR_23 |= VAR_17 |
    VAR_18 |
    VAR_1;

  FUNC_0(VAR_21, VAR_19, 0xffffffff);


  FUNC_0(VAR_21, VAR_20, VAR_23);
 } else {

  FUNC_0(VAR_21, VAR_20, 0);
 }
}
