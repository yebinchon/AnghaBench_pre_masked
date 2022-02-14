
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unicode_t ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unicode_t FUNC_1(const uint8_t *VAR_7, int VAR_8,
    int VAR_9, int VAR_10, unicode_t *VAR_11)
{
 unicode_t VAR_12;
 int VAR_13 = VAR_9;


 VAR_12 = VAR_7[VAR_9++];
 if (VAR_10 > 1)
  VAR_12 = (VAR_12 << 8) | VAR_7[VAR_9++];
 if ((VAR_12 & VAR_4) == VAR_5) {
  unicode_t VAR_14;


  if (VAR_9 >= VAR_8) {
   VAR_12 = VAR_6 + 1;
   goto out;
  }


  if (VAR_12 & VAR_3) {
   VAR_12 = VAR_6 + 1;
   goto out;
  }

  FUNC_0(VAR_10 != 2);
  VAR_14 = VAR_7[VAR_9++] << 8;
  VAR_14 |= VAR_7[VAR_9++];
  if ((VAR_14 & VAR_4) != VAR_5 ||
      !(VAR_14 & VAR_3)) {
   VAR_12 = VAR_6 + 1;
   goto out;
  }

  VAR_12 = VAR_0 +
      ((VAR_12 & VAR_2) << VAR_1) +
      (VAR_14 & VAR_2);
 }
out:
 *VAR_11 = VAR_12;
 return VAR_9 - VAR_13;
}
