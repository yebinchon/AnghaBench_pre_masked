
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_screen {void** lines; } ;
typedef int char32_t ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static struct uni_screen *FUNC_1(unsigned int VAR_1, unsigned int VAR_2)
{
 struct uni_screen *VAR_3;
 void *VAR_4;
 unsigned int VAR_5, VAR_6;


 VAR_5 = VAR_1 * VAR_2 * sizeof(char32_t);
 VAR_5 += VAR_2 * sizeof(char32_t *);
 VAR_4 = FUNC_0(VAR_5, VAR_0);
 if (!VAR_4)
  return ((void*)0);


 VAR_3 = VAR_4;
 VAR_4 = VAR_3->lines + VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_3->lines[VAR_6] = VAR_4;
  VAR_4 += VAR_1 * sizeof(char32_t);
 }
 return VAR_3;
}
