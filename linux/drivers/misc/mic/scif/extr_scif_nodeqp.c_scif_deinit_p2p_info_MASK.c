
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_p2p_info {int * ppi_sg; int * sg_nentries; } ;
struct scif_hw_dev {int dev; } ;
struct scif_dev {struct scif_hw_dev* sdev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct scif_p2p_info*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct scif_dev *VAR_3,
     struct scif_p2p_info *VAR_4)
{
 struct scif_hw_dev *VAR_5 = VAR_3->sdev;

 FUNC_0(&VAR_5->dev, VAR_4->ppi_sg[VAR_2],
       VAR_4->sg_nentries[VAR_2], VAR_0);
 FUNC_0(&VAR_5->dev, VAR_4->ppi_sg[VAR_1],
       VAR_4->sg_nentries[VAR_1], VAR_0);
 FUNC_2(VAR_4->ppi_sg[VAR_2]);
 FUNC_2(VAR_4->ppi_sg[VAR_1]);
 FUNC_1(VAR_4);
}
