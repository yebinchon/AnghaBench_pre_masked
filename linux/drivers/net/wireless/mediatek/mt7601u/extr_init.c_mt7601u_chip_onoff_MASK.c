
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int hw_atomic_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mt7601u_dev*,int ) ;
 int FUNC_1 (struct mt7601u_dev*,int,int) ;
 int FUNC_2 (struct mt7601u_dev*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct mt7601u_dev *VAR_6, bool VAR_7, bool VAR_8)
{
 u32 VAR_9;

 FUNC_3(&VAR_6->hw_atomic_mutex);

 VAR_9 = FUNC_0(VAR_6, VAR_0);

 if (VAR_8) {
  VAR_9 |= VAR_2;
  VAR_9 &= ~VAR_1;

  if (VAR_9 & VAR_3) {
   VAR_9 |= (VAR_4 |
    VAR_5);
   FUNC_2(VAR_6, VAR_0, VAR_9);
   FUNC_5(20);

   VAR_9 &= ~(VAR_4 |
     VAR_5);
  }
 }

 FUNC_2(VAR_6, VAR_0, VAR_9);
 FUNC_5(20);

 FUNC_1(VAR_6, VAR_9, VAR_7);

 FUNC_4(&VAR_6->hw_atomic_mutex);
}
