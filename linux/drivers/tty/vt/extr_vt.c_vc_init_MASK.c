
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned int vc_cols; unsigned int vc_rows; unsigned int vc_size_row; int vc_screenbuf_size; int vc_halfcolor; int paste_wait; int vc_itcolor; int vc_ulcolor; int vc_def_color; int * vc_palette; int vc_origin; int vc_pos; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vc_data*,int) ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 (struct vc_data*) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_6, unsigned int VAR_7,
      unsigned int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11 ;

 VAR_6->vc_cols = VAR_8;
 VAR_6->vc_rows = VAR_7;
 VAR_6->vc_size_row = VAR_8 << 1;
 VAR_6->vc_screenbuf_size = VAR_6->vc_rows * VAR_6->vc_size_row;

 FUNC_3(VAR_6);
 VAR_6->vc_pos = VAR_6->vc_origin;
 FUNC_2(VAR_6);
 for (VAR_10=VAR_11=0; VAR_10<16; VAR_10++) {
  VAR_6->vc_palette[VAR_11++] = VAR_4[VAR_10] ;
  VAR_6->vc_palette[VAR_11++] = VAR_2[VAR_10] ;
  VAR_6->vc_palette[VAR_11++] = VAR_0[VAR_10] ;
 }
 VAR_6->vc_def_color = VAR_1;
 VAR_6->vc_ulcolor = VAR_5;
 VAR_6->vc_itcolor = VAR_3;
 VAR_6->vc_halfcolor = 0x08;
 FUNC_0(&VAR_6->paste_wait);
 FUNC_1(VAR_6, VAR_9);
}
