
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tccb {int * tca; } ;
struct dcw {int flags; scalar_t__ cd_count; scalar_t__ count; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 size_t FUNC_1 (struct tccb*) ;

__attribute__((used)) static u32 FUNC_2(struct tccb *VAR_1)
{
 int VAR_2;
 struct dcw *VAR_3;
 u32 VAR_4 = 0;
 size_t VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_5;) {
  VAR_3 = (struct dcw *) &VAR_1->tca[VAR_2];
  VAR_4 += VAR_3->count;
  if (!(VAR_3->flags & VAR_0))
   break;
  VAR_2 += sizeof(struct dcw) + FUNC_0((int) VAR_3->cd_count, 4);
 }
 return VAR_4;
}
