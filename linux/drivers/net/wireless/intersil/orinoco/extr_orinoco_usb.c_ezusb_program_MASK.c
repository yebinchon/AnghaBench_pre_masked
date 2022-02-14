
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hermes {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hermes*,char const*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,char const*) ;

__attribute__((used)) static int FUNC_2(struct hermes *VAR_1, const char *VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7 = 0;





 VAR_6 = (VAR_4 < VAR_0) ? VAR_4 : VAR_0;
 VAR_5 = VAR_3;

 while (VAR_5 < (VAR_3 + VAR_4)) {
  FUNC_1("Programming subblock of length %d "
    "to address 0x%08x. Data @ %p\n",
    VAR_6, VAR_5, &VAR_2[VAR_5 - VAR_3]);

  VAR_7 = FUNC_0(VAR_1, &VAR_2[VAR_5 - VAR_3],
       VAR_5, VAR_6);
  if (VAR_7)
   break;

  VAR_5 += VAR_6;
  VAR_6 = ((VAR_3 + VAR_4 - VAR_5) < VAR_0) ?
   (VAR_3 + VAR_4 - VAR_5) : VAR_0;
 }

 return VAR_7;
}
