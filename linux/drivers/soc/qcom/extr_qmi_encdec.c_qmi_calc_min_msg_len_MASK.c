
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qmi_elem_info {scalar_t__ data_type; int elem_size; int elem_len; struct qmi_elem_info* ei_array; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct qmi_elem_info* FUNC_0 (struct qmi_elem_info*,int) ;

__attribute__((used)) static int FUNC_1(struct qmi_elem_info *VAR_8,
    int VAR_9)
{
 int VAR_10 = 0;
 struct qmi_elem_info *VAR_11 = VAR_8;

 if (!VAR_8)
  return VAR_10;

 while (VAR_11->data_type != VAR_1) {

  if (VAR_11->data_type == VAR_2) {
   VAR_11 = FUNC_0(VAR_11, VAR_9);
   continue;
  }

  if (VAR_11->data_type == VAR_0) {
   VAR_10 += (VAR_11->elem_size == sizeof(u8) ?
     sizeof(u8) : sizeof(u16));
   VAR_11++;
   continue;
  } else if (VAR_11->data_type == VAR_4) {
   VAR_10 += FUNC_1(VAR_11->ei_array,
           (VAR_9 + 1));
   VAR_11++;
  } else if (VAR_11->data_type == VAR_3) {
   if (VAR_9 > 1)
    VAR_10 += VAR_11->elem_len <= VAR_7 ?
     sizeof(u8) : sizeof(u16);
   VAR_10 += VAR_11->elem_len * VAR_11->elem_size;
   VAR_11++;
  } else {
   VAR_10 += (VAR_11->elem_len * VAR_11->elem_size);
   VAR_11++;
  }





  if (VAR_9 == 1)
   VAR_10 += (VAR_6 + VAR_5);
 }

 return VAR_10;
}
