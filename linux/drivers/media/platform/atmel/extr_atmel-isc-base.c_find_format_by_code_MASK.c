
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isc_format {unsigned int mbus_code; } ;


 unsigned int FUNC_0 (struct isc_format*) ;
 struct isc_format* VAR_0 ;

__attribute__((used)) static struct isc_format *FUNC_1(unsigned int VAR_1, int *VAR_2)
{
 struct isc_format *VAR_3 = &VAR_0[0];
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_3->mbus_code == VAR_1) {
   *VAR_2 = VAR_4;
   return VAR_3;
  }

  VAR_3++;
 }

 return ((void*)0);
}
