
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sid {int num_subauth; int * sub_auth; scalar_t__* authority; int revision; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 char* FUNC_0 (scalar_t__,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned int,...) ;

__attribute__((used)) static char *
FUNC_3(struct cifs_sid *VAR_5, unsigned int VAR_6)
{
 int VAR_7, VAR_8;
 unsigned int VAR_9;
 char *VAR_10, *VAR_11;
 unsigned long long VAR_12;


 VAR_10 = FUNC_0(3 + VAR_2 +
    (VAR_3 * VAR_5->num_subauth),
    VAR_0);
 if (!VAR_10)
  return VAR_10;

 VAR_11 = VAR_10;
 VAR_8 = FUNC_2(VAR_11, "%cs:S-%hhu", VAR_6 == VAR_1 ? 'o' : 'g',
   VAR_5->revision);
 VAR_11 += VAR_8;


 VAR_12 = (unsigned long long)VAR_5->authority[5];
 VAR_12 |= (unsigned long long)VAR_5->authority[4] << 8;
 VAR_12 |= (unsigned long long)VAR_5->authority[3] << 16;
 VAR_12 |= (unsigned long long)VAR_5->authority[2] << 24;
 VAR_12 |= (unsigned long long)VAR_5->authority[1] << 32;
 VAR_12 |= (unsigned long long)VAR_5->authority[0] << 48;





 if (VAR_12 <= VAR_4)
  VAR_8 = FUNC_2(VAR_11, "-%llu", VAR_12);
 else
  VAR_8 = FUNC_2(VAR_11, "-0x%llx", VAR_12);

 VAR_11 += VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_subauth; ++VAR_7) {
  VAR_9 = FUNC_1(VAR_5->sub_auth[VAR_7]);
  VAR_8 = FUNC_2(VAR_11, "-%u", VAR_9);
  VAR_11 += VAR_8;
 }

 return VAR_10;
}
