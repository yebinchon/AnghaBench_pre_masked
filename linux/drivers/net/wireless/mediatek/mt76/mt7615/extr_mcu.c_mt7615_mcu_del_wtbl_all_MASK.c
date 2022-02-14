
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wtbl_req_hdr {int operation; } ;
struct mt7615_dev {int mt76; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,struct wtbl_req_hdr*,int,int) ;

int FUNC_1(struct mt7615_dev *VAR_2)
{
 struct wtbl_req_hdr VAR_3 = {
  .operation = VAR_1,
 };

 return FUNC_0(&VAR_2->mt76, VAR_0,
       &VAR_3, sizeof(VAR_3), 1);
}
