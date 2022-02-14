
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef scalar_t__ uint32_t ;
struct qla_hw_data {char* fcode_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 char FUNC_1 (struct qla_hw_data*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct qla_hw_data *VAR_2, uint32_t VAR_3)
{
 int VAR_4 = VAR_0;
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8;
 uint8_t VAR_9, VAR_10, *VAR_11;

 FUNC_0(VAR_2->fcode_revision, 0, sizeof(VAR_2->fcode_revision));


 VAR_5 = VAR_3 +
     ((FUNC_1(VAR_2, VAR_3 + 0x0B) << 8) |
  FUNC_1(VAR_2, VAR_3 + 0x0A));
 VAR_6 = VAR_5 + 0x100;
 do {

  VAR_9 = 0;
  VAR_7 = VAR_5;
  while ((VAR_7 < VAR_6) && !VAR_9) {
   VAR_7++;
   if (FUNC_1(VAR_2, VAR_7) == '/') {
    if (FUNC_1(VAR_2, VAR_7 + 2) ==
        '/')
     VAR_9++;
    else if (FUNC_1(VAR_2,
        VAR_7 + 3) == '/')
     VAR_9++;
   }
  }
  if (!VAR_9)
   break;


  VAR_9 = 0;
  while ((VAR_7 > VAR_5) && !VAR_9) {
   VAR_7--;
   if (FUNC_1(VAR_2, VAR_7) == ' ')
    VAR_9++;
  }
  if (!VAR_9)
   break;





  VAR_8 = VAR_7 - 1;
  VAR_9 = 0;
  while ((VAR_7 > VAR_5) && !VAR_9) {
   VAR_7--;
   VAR_10 = FUNC_1(VAR_2, VAR_7);
   if (VAR_10 == ' ' || VAR_10 == 0xd || VAR_10 == 0x10)
    VAR_9++;
  }
  if (!VAR_9)
   break;


  VAR_7++;
  if ((VAR_8 - VAR_7) &&
      ((VAR_8 - VAR_7) < sizeof(VAR_2->fcode_revision))) {
   VAR_11 = VAR_2->fcode_revision;
   while (VAR_7 <= VAR_8) {
    *VAR_11++ = FUNC_1(VAR_2, VAR_7);
    VAR_7++;
   }
   VAR_4 = VAR_1;
  }
 } while (0);

 if (VAR_4 != VAR_1)
  FUNC_0(VAR_2->fcode_revision, 0, sizeof(VAR_2->fcode_revision));
}
