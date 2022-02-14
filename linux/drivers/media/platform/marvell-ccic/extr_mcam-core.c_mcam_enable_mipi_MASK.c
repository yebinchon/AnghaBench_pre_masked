
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcam_camera {int* dphy; int mipi_enabled; int lane; int (* calc_dphy ) (struct mcam_camera*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mcam_camera*,char*,int,int,int) ;
 int FUNC_2 (struct mcam_camera*,char*) ;
 int FUNC_3 (struct mcam_camera*,int ,int) ;
 int FUNC_4 (struct mcam_camera*) ;

__attribute__((used)) static void FUNC_5(struct mcam_camera *VAR_5)
{

 if (VAR_5->calc_dphy)
  VAR_5->calc_dphy(VAR_5);
 FUNC_1(VAR_5, "camera: DPHY3=0x%x, DPHY5=0x%x, DPHY6=0x%x\n",
   VAR_5->dphy[0], VAR_5->dphy[1], VAR_5->dphy[2]);
 FUNC_3(VAR_5, VAR_2, VAR_5->dphy[0]);
 FUNC_3(VAR_5, VAR_3, VAR_5->dphy[1]);
 FUNC_3(VAR_5, VAR_4, VAR_5->dphy[2]);

 if (!VAR_5->mipi_enabled) {
  if (VAR_5->lane > 4 || VAR_5->lane <= 0) {
   FUNC_2(VAR_5, "lane number error\n");
   VAR_5->lane = 1;
  }






  FUNC_3(VAR_5, VAR_1,
   VAR_0 | FUNC_0(VAR_5->lane));
  VAR_5->mipi_enabled = 1;
 }
}
