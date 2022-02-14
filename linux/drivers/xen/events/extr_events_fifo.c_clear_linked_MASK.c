
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int event_word_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int volatile*,int,int) ;

__attribute__((used)) static uint32_t FUNC_1(volatile event_word_t *VAR_2)
{
 event_word_t VAR_3, VAR_4, VAR_5;

 VAR_5 = *VAR_2;

 do {
  VAR_4 = VAR_5;
  VAR_3 = (VAR_5 & ~((1 << VAR_0)
        | VAR_1));
 } while ((VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_3)) != VAR_4);

 return VAR_5 & VAR_1;
}
