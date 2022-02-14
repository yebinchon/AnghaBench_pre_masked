
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7601u_dev {int in_max_packet; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct mt7601u_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mt7601u_dev *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_5, VAR_1) |
       FUNC_0(VAR_4,
    VAR_0) |
       VAR_6 |
       VAR_7;
 if (VAR_9->in_max_packet == 512)
  VAR_10 |= VAR_3;
 FUNC_1(VAR_9, VAR_2, VAR_10);

 VAR_10 |= VAR_8;
 FUNC_1(VAR_9, VAR_2, VAR_10);
 VAR_10 &= ~VAR_8;
 FUNC_1(VAR_9, VAR_2, VAR_10);
}
