
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7601u_dev {int * wcid_mask; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct mt7601u_dev *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->wcid_mask); VAR_2++) {
  VAR_3 = FUNC_2(~VAR_1->wcid_mask[VAR_2]);
  if (!VAR_3)
   continue;

  VAR_3--;
  VAR_1->wcid_mask[VAR_2] |= FUNC_1(VAR_3);
  break;
 }

 VAR_3 = VAR_2 * VAR_0 + VAR_3;
 if (VAR_3 > 119)
  return -1;

 return VAR_3;
}
