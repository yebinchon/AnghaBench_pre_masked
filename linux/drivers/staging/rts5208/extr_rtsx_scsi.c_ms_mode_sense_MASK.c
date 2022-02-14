
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ms_info {int raw_sys_info; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 scalar_t__ FUNC_0 (struct ms_info*) ;
 scalar_t__ FUNC_1 (struct ms_info*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct rtsx_chip*,int) ;
 scalar_t__ FUNC_3 (struct rtsx_chip*,int) ;
 int FUNC_4 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct rtsx_chip *VAR_2, u8 VAR_3,
     int VAR_4, u8 *VAR_5, int VAR_6)
{
 struct ms_info *VAR_7 = &VAR_2->ms_card;
 int VAR_8;
 int VAR_9 = VAR_6;
 bool VAR_10 = 0;
 int VAR_11 = 0;

 if (VAR_3 == VAR_0) {
  VAR_8 = 8;
  if (VAR_9 > 0x68)
   VAR_9 = 0x68;

  VAR_5[VAR_11++] = 0x67;
 } else {
  VAR_8 = 12;
  if (VAR_9 > 0x6C)
   VAR_9 = 0x6C;

  VAR_5[VAR_11++] = 0x00;
  VAR_5[VAR_11++] = 0x6A;
 }


 if (FUNC_2(VAR_2, VAR_4)) {
  if (FUNC_1(VAR_7)) {
   VAR_10 = 1;
   VAR_5[VAR_11++] = 0x40;
  } else if (FUNC_0(VAR_7)) {
   VAR_10 = 1;
   VAR_5[VAR_11++] = 0x20;
  } else {
   VAR_5[VAR_11++] = 0x10;
  }


  if (FUNC_3(VAR_2, VAR_4))
   VAR_5[VAR_11++] = 0x80;
  else
   VAR_5[VAR_11++] = 0x00;

 } else {
  VAR_5[VAR_11++] = 0x00;
  VAR_5[VAR_11++] = 0x00;
 }

 VAR_5[VAR_11++] = 0x00;

 if (VAR_3 == VAR_1) {
  VAR_5[VAR_11++] = 0x00;
  VAR_5[VAR_11++] = 0x00;
  VAR_5[VAR_11++] = 0x00;


  if (VAR_9 >= 9)
   VAR_5[VAR_11++] = 0x20;
  if (VAR_9 >= 10)
   VAR_5[VAR_11++] = 0x62;
  if (VAR_9 >= 11)
   VAR_5[VAR_11++] = 0x00;
  if (VAR_9 >= 12) {
   if (VAR_10)
    VAR_5[VAR_11++] = 0xC0;
   else
    VAR_5[VAR_11++] = 0x00;
  }
 } else {

  if (VAR_9 >= 5)
   VAR_5[VAR_11++] = 0x20;
  if (VAR_9 >= 6)
   VAR_5[VAR_11++] = 0x62;
  if (VAR_9 >= 7)
   VAR_5[VAR_11++] = 0x00;
  if (VAR_9 >= 8) {
   if (VAR_10)
    VAR_5[VAR_11++] = 0xC0;
   else
    VAR_5[VAR_11++] = 0x00;
  }
 }

 if (VAR_9 > VAR_8) {

  int VAR_12 = VAR_9 - VAR_8;

  VAR_12 = (VAR_12 < 96) ? VAR_12 : 96;

  FUNC_4(VAR_5 + VAR_8, VAR_7->raw_sys_info, VAR_12);
 }
}
