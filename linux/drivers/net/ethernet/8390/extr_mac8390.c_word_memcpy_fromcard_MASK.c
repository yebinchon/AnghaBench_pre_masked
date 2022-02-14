__attribute__((used)) static void FUNC_0(void *VAR_0, unsigned long VAR_1, int VAR_2)
{
 unsigned short *VAR_3 = VAR_0;
 const volatile unsigned short *VAR_4 = (const void *)VAR_1;

 VAR_2++;
 VAR_2 /= 2;

 while (VAR_2--)
  *VAR_3++ = *VAR_4++;
}
