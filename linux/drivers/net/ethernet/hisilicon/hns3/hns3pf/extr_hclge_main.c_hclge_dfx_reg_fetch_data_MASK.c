
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclge_desc {int * data; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hclge_desc *VAR_3, int VAR_4,
        void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 struct hclge_desc *VAR_12 = VAR_3;
 u32 *VAR_13 = VAR_5;

 VAR_6 = FUNC_0(VAR_12->data);
 VAR_7 = VAR_6 * VAR_4;
 VAR_8 = VAR_0 - (VAR_7 & VAR_1);
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_10 = VAR_11 % VAR_6;
  VAR_9 = VAR_11 / VAR_6;
  *VAR_13++ = FUNC_1(VAR_12[VAR_9].data[VAR_10]);
 }
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  *VAR_13++ = VAR_2;

 return VAR_7 + VAR_8;
}
