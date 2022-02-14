
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int channel; int norme; } ;
struct gspca_dev {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1,
      __u16 *VAR_2, __u16 *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_1;



 *VAR_2 = VAR_4->norme;
 *VAR_3 = VAR_4->channel;
 FUNC_0(VAR_1, VAR_0, "Get Norme: %d Channel %d\n",
    *VAR_2, *VAR_3);
}
